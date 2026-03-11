/*
 * func-name: sub_1015BC70
 * func-address: 0x1015bc70
 * callers: none
 * callees: 0x1004f2e0
 */

void __thiscall sub_1015BC70(Actor *this, struct Actor *a2, int a3)
{
  Actor::Clone(this, a2, a3);
  if ( a2 )
  {
    *((_DWORD *)a2 + 293) = *((_DWORD *)this + 293);
    *((_DWORD *)a2 + 294) = *((_DWORD *)this + 294);
    *((_DWORD *)a2 + 295) = *((_DWORD *)this + 295);
    *((_DWORD *)a2 + 296) = *((_DWORD *)this + 296);
    std::string::operator=((char *)a2 + 1188, (char *)this + 1188);
  }
}
