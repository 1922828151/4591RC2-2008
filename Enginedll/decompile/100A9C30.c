/*
 * func-name: ?GetPrevControl@CREDialog@@SAPAVCREControl@@PAV2@@Z
 * func-address: 0x100a9c30
 * callers: 0x100a9d20
 * callees: none
 */

struct CREControl *__cdecl CREDialog::GetPrevControl(struct CREControl *a1)
{
  int v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx

  v1 = *((_DWORD *)a1 + 29) - 1;
  v2 = (_DWORD *)*((_DWORD *)a1 + 28);
  if ( v1 >= 0 )
    return *(struct CREControl **)(v2[191] + 4 * v1);
  do
  {
    v2 = (_DWORD *)v2[933];
    if ( !v2 )
      v2 = (_DWORD *)*((_DWORD *)a1 + 28);
    v3 = v2[192] - 1;
  }
  while ( v3 < 0 );
  return *(struct CREControl **)(v2[191] + 4 * v3);
}
