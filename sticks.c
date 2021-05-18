import java.util.*;
class Node{
 
public int a;
 
public int b;
 
public Node(int a, int b){
 
this.a = a;
 
this.b = b;
 
}
 
}
 

 
 class Main{
 
public static void main(String[] args) {
 
Scanner kb = new Scanner(System.in);
 
int t = kb.nextInt();
 
while(t-- >0){
 
TreeMap<Integer, Integer> map = new TreeMap<>();
 
//HashSet<Integer> set = new HashSet<>();
 
int n = kb.nextInt();
 
int k = kb.nextInt();
 
k = n-k;
 
int [] arr = new int[n];
 
ArrayList<Node> al = new ArrayList<>();
 
for(int i=0;i<n;i++){
 
arr[i] = kb.nextInt();
 
//set.add(arr[i]);
 
Integer c = map.get(arr[i]);
 
if(c==null){
 
map.put(arr[i],1);
 
}
 
else{
 
map.put(arr[i],++c);
 
}
 
}
 
//int ssize = set.size();
 
 
 
 
al.add(0, new Node(-1,-1));
 
int m = 1;
 
for(Map.Entry<Integer, Integer> entry:map.entrySet()){
 
int key = entry.getKey();
 
int value = entry.getValue();
if(value>1)
al.add(m++, new Node(key, value));
 
}
 
m--;
int req = 0;
int mxx =0;
 
 
int [] pre = new int[m+1];
 
for(int i=1;i<=m;i++){
 
pre[i] = pre[i-1]+al.get(i).b;
if(al.get(i).b>1){
req += (al.get(i).b)-1;
mxx = Math.max(mxx, al.get(i).b-1);
}
 
}
 
if((req-Math.min(2,mxx))<=k){
System.out.println("-1");
continue;
}
 
long res = Long.MAX_VALUE;
 
for(int i=m;i>=1;i--){
 
Node node = al.get(i);
 
if(node.b>=4){
 
if((node.b)-3>k){
 
long temp = ((long)node.a) * node.a;
 
res = Math.min(res,temp);
 
break;
 
}
 
k = k-(node.b-3);
 
node.b = 3;
 
}
 
if(node.b==3){
 
int l = 1;
 
int r = i;
 
while(r-l>1){
 
int mid = (l+r)/2;
 
if(pre[i-1]-pre[mid-1]-(i-mid)>(k)){
 
l = mid;
 
}
 
else{
 
r = mid;
 
}
 
}
 
Node n2 = al.get(l);
 
long temp = ((long)(node.a))*(n2.a);
 
res = Math.min(res, temp);
 
}
 
if(node.b>1){
 
if((node.b-1)>k){
 
for(int j=i-1;j>=1;j--){
 
Node ni = al.get(j);
 
if((ni.b-1)>k){
 
long temp = ((long)(node.a))*(ni.a);
 
res = Math.min(res, temp);
 
break;
 
}
 
k = (k-(ni.b-1));
 
}
 
break;
 
}
 
k = k-(node.b-1);
 
node.b = 1;
 
}
 
}
 
System.out.println(res);
 
}
 
kb.close();
 
}
 
}
