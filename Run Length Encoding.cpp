string encode(string src)
{     
  //Your code here 
  char c = src[0];
  int cnt =0;
  string s;
  for(auto x : src)
  {
      if(x==c) cnt++;
      else {s += c + to_string(cnt); cnt =1; c= x;}
  }
  s += c + to_string(cnt);
  return s;
} 
