/*
 * func-name: sub_101E1E80
 * func-address: 0x101e1e80
 * callers: 0x10018377
 * callees: 0x1000c789
 */

void *__thiscall sub_101E1E80(_DWORD *this, void *a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // ecx
  void *v5; // eax

  if ( a3 >= 0 && (v3 = this[53], v4 = this + 52, v3) && a3 < (unsigned int)((v4[2] - v3) / 28) )
  {
    v5 = (void *)sub_1000C789(a3);
    std::string::string(a2, v5);
    return a2;
  }
  else
  {
    std::string::string(a2);
    return a2;
  }
}
