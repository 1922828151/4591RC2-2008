/*
 * func-name: sub_102AD980
 * func-address: 0x102ad980
 * callers: 0x10010596
 * callees: none
 */

void __thiscall sub_102AD980(_DWORD *this)
{
  int v1; // ecx
  int v2; // esi
  int v3; // esi
  int v4; // eax

  v1 = this[2];
  if ( v1 )
  {
    v2 = v1;
    sub_1001972C();
    v3 = v2 + 48;
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( !v4 || !((*(_DWORD *)(v3 + 8) - v4) >> 2) )
        break;
      sub_100035C6();
    }
  }
}
