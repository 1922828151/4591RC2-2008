/*
 * func-name: ?GetNumKeyFrames@Light@@QAEHXZ
 * func-address: 0x1001c210
 * callers: none
 * callees: none
 */

int __thiscall Light::GetNumKeyFrames(Light *this)
{
  int result; // eax

  result = *((_DWORD *)this + 288);
  if ( result )
    return (*((_DWORD *)this + 289) - result) / 72;
  return result;
}
