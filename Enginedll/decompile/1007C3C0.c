/*
 * func-name: sub_1007C3C0
 * func-address: 0x1007c3c0
 * callers: 0x1007c450
 * callees: 0x100292f0, 0x101a26c0
 */

PRTSettings *__thiscall sub_1007C3C0(int this, PRTSettings *a2, struct PRTSettings *a3)
{
  int v4; // eax
  bool v5; // zf

  PRTSettings::PRTSettings(a2, a3);
  *(_DWORD *)((char *)a2 + 1561) = (int)(*(float *)(this + 28) / 100.0 * (double)*(int *)((char *)a2 + 1561));
  v4 = (int)(*(float *)(this + 32) / 100.0 * (double)*(int *)((char *)a2 + 1573));
  *(_DWORD *)((char *)a2 + 1573) = v4;
  if ( !v4 )
    *(_DWORD *)((char *)a2 + 1573) = 1;
  v5 = *((_BYTE *)a2 + 2210) == 0;
  *((_BYTE *)a2 + 2200) = 1;
  *((_BYTE *)a2 + 2201) = 1;
  if ( !v5 || *(_BYTE *)(this + 25) )
    *((_BYTE *)a2 + 1643) = 0;
  return a2;
}
