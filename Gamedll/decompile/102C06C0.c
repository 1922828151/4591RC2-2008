/*
 * func-name: sub_102C06C0
 * func-address: 0x102c06c0
 * callers: 0x102bfb10
 * callees: none
 */

void __thiscall sub_102C06C0(_DWORD *this)
{
  int v2; // eax
  char *v3; // edi
  char *v4; // esi

  v2 = this[1];
  if ( v2 )
  {
    v3 = (char *)this[2];
    if ( (int)&v3[-v2] / 28 )
    {
      v4 = v3 - 28;
      do
      {
        std::string::~string(v4);
        v4 += 28;
      }
      while ( v4 != v3 );
      this[2] -= 28;
    }
  }
}
