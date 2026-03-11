/*
 * func-name: ?GetNextControl@CREDialog@@SAPAVCREControl@@PAV2@@Z
 * func-address: 0x100a9be0
 * callers: 0x100a9d20
 * callees: none
 */

struct CREControl *__cdecl CREDialog::GetNextControl(struct CREControl *a1)
{
  _DWORD *v1; // eax
  int v2; // ecx

  v1 = (_DWORD *)*((_DWORD *)a1 + 28);
  v2 = *((_DWORD *)a1 + 29) + 1;
  if ( v2 < v1[192] )
    return *(struct CREControl **)(v1[191] + 4 * v2);
  do
    v1 = (_DWORD *)v1[932];
  while ( (int)v1[192] <= 0 );
  return *(struct CREControl **)v1[191];
}
