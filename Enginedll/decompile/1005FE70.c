/*
 * func-name: sub_1005FE70
 * func-address: 0x1005fe70
 * callers: none
 * callees: none
 */

int __thiscall sub_1005FE70(_DWORD *this, unsigned int a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // esi

  v3 = this[3];
  v4 = 0;
  if ( !v3 || a2 >= (this[4] - v3) >> 1 )
    invalid_parameter_noinfo();
  v5 = *(unsigned __int16 *)(this[3] + 2 * a2);
  if ( v5 != 0xFFFF )
  {
    v6 = this[13];
    do
    {
      v5 = *(unsigned __int16 *)(v6 + 6 * (unsigned __int16)v5 + 4);
      ++v4;
    }
    while ( v5 != 0xFFFF );
  }
  return v4;
}
