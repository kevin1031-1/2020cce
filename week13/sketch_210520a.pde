void setup()//只做一次
{
  size(1024,400);
  textFont(createFont("標楷體",20));
}
void draw()//60s一次
{
  background(#3E8DF7);
  int s =second();
  int m=minute();
  int h=hour();
  textSize(80);
  text(h+":"+m+":"+s,212,200);//畫出文字
  int total=s+60*m+60*60*h;
  int closeH=17,closeM=40,closeS=0;
  int total2=60*60*closeH+60*closeM+closeS;
  int ans=total2-total;
  text("剩下時間:"+ans/60/60+"時:"+ans/60+"分:"+ans%60+"秒",100,100);
}
