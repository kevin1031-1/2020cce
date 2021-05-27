int ans=0;
void setup()
{
  size(300,300);
  textSize(100);
}
void draw()
{
  background(#FCF757);
  text(ans,100,150);
}
void mousePressed()
{
  ans=(int)random(60);
}
