#include<stdio.h> 
#include<stdlib.h> 

typedef struct nodeType {
int *at;
int *bt;
int pid;
struct nodeType* next;
}node;

void insert(node **f,node **r,int*at,int*bt,int pid) {
node *p=(node *)malloc(sizeof(node)); 
if(p!=NULL)
{
p->at=at; p->bt=bt; p->pid=pid; p->next=NULL; 

if(*f==NULL)
{
*f=p;
*r=p; }
else {
(*r)->next=p;
*r=p; }
} }


void display(node *f) {
while(f!=NULL) {
printf("\n");
printf("\np->at %d and value: %d\t burst time: %d",f->at,*(f->at),*(f->bt)); f=f->next;
} }
void run(node ** f,int *ct,int q)//run process in queue (increase current time, set next arrival time of a process)
{
node *p=*f; if(p!=NULL) {
int *artime=p->at;int * butime=p->bt; if(*butime>q)
{
*butime=(*butime)-q; *ct=(*ct)+q; *artime=*ct;
}
else if(*butime<=q && *artime!=-1) {
*ct=(*ct)+(*butime);
*butime=0;
*artime=-1;//means process ended
}
printf("P%d ",p->pid); }
}
int delete(node **f)//delete front i.e process removed from queue
{
node *p=*f; int pid=p->pid; if(*f!=NULL)
{
*f=(*f)->next;
free(p); }
return pid; }


int main() 
{
int n,i,j,temp;
printf("Number of process: ");
scanf("%d",&n);
int at[n],bt[n],cat[n],rbt[n],inq[n],pid[n];//cat=>current arrival time , inq=>in queue or not,rbt=>remaining burst time
int compt[n];//completion time printf("Arrival time: "); for(i=0;i<n;i++)
{
scanf("%d",&at[i]);
cat[i]=at[i];//cat for assigning new arrival time and setting -1 when process ends pid[i]=i;//for process id
}
printf("Burst time: "); for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
rbt[i]=bt[i];//rbt for remaining burst time inq[i]=0;
}
int q;

printf("Quantum time: "); scanf("%d",&q);
printf("Gantt chart: ");
int count=0,ct=0,spid,k;
node *front=NULL,*rear=NULL; while(count<n)
{
temp=0;//condition so that in one cycle only the process at front executes for(j=0;j<n;j++)
{
if(cat[j]<=ct&&cat[j]!=-1&&inq[j]!=1) {
insert(&front,&rear,&cat[i],&rbt[i],pid[j]);
inq[j]=1; }
if(temp==0) {
run(&front,&ct,q);
temp=1;//now no other process will run spid=delete(&front);
for(k=0;k<n;k++)
{
if(pid[k]==spid)//pid of the deleted process from queue 
{
inq[k]=0;//that process in queue set to false compt[k]=ct;//completion time
break;
} }
} }
count=0; for(k=0;k<n;k++) {
if(cat[k]==-1)
count++;//for counting completed process
} }

float tat=0,wat=0,ctat=0; 
for(i=0;i<n;i++)
{
ctat=compt[i]-at[i]; tat+=ctat; wat+=(ctat-bt[i]);
}
printf("The average waiting time: ",ctat/n); printf("The average turnaround time: ",wat/n);
}