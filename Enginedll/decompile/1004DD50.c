/*
 * func-name: ?GetCollisionModel@Actor@@UAEPAVModel@@XZ
 * func-address: 0x1004dd50
 * callers: none
 * callees: none
 */

struct Model *__thiscall Actor::GetCollisionModel(Actor *this)
{
  int v1; // edx
  struct Model *result; // eax

  v1 = *((_DWORD *)this + 179);
  if ( !v1 || (result = *(struct Model **)(v1 + 144)) == 0 )
  {
    result = (struct Model *)*((_DWORD *)this + 180);
    if ( !result )
      return (struct Model *)*((_DWORD *)this + 179);
  }
  return result;
}
