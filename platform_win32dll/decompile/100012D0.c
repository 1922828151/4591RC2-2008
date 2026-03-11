/*
 * func-name: sub_100012D0
 * func-address: 0x100012d0
 * callers: none
 * callees: 0x10001080
 */

char *__thiscall sub_100012D0(char *this, int a2, int a3)
{
  const CHAR *v4; // eax

  std::string::string(a2);
  std::string::string(this + 28);
  if ( a3 )
    std::string::operator=(this + 28, a3);
  v4 = (const CHAR *)std::string::c_str(this);
  DeleteFileA(v4);
  sub_10001080((int)this);
  return this;
}
