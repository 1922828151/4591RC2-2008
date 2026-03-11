/*
 * func-name: sub_1005F200
 * func-address: 0x1005f200
 * callers: none
 * callees: none
 */

int __thiscall sub_1005F200(_DWORD *this, int a2, int (__thiscall ***a3)(_DWORD, int, int), int a4)
{
  int v5; // esi
  int v6; // ecx
  char *v7; // esi

  v5 = 0;
  do
  {
    v6 = this[3];
    if ( !v6 || v5 >= (unsigned int)((this[4] - v6) >> 4) )
      invalid_parameter_noinfo();
    v7 = (char *)(this[3] + 16 * v5);
    if ( *((float *)v7 + 1) < (double)*(float *)(a2 + 4 * *v7) )
      v5 = *((_DWORD *)v7 + 3);
    else
      v5 = *((_DWORD *)v7 + 2);
  }
  while ( v5 >= 0 );
  return (**a3)(a3, -1 - v5, a4);
}
