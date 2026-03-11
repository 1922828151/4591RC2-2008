/*
 * func-name: sub_1007DA70
 * func-address: 0x1007da70
 * callers: 0x1007dc30, 0x1007dcf0, 0x10084160, 0x10085820, 0x10087570, 0x1015d190, 0x10166fb0, 0x10169020
 * callees: 0x1000bc40, 0x1007da10, 0x1009dd90, 0x1009ee50, 0x100ef210, 0x10179840, 0x101a2500
 */

char __thiscall sub_1007DA70(_DWORD *this, int a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v4; // eax
  unsigned int i; // esi
  ModelFrame **v6; // ecx
  int v7; // eax
  char v8; // bl
  int v9; // eax
  float *v11; // eax
  char v12; // [esp+3h] [ebp-5Dh]
  _BYTE v13[4]; // [esp+4h] [ebp-5Ch] BYREF
  void *v14; // [esp+8h] [ebp-58h]
  int v15; // [esp+Ch] [ebp-54h]
  int v16; // [esp+10h] [ebp-50h]
  float v17[18]; // [esp+14h] [ebp-4Ch] BYREF
  int v18; // [esp+5Ch] [ebp-4h]

  v18 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  LODWORD(v17[17]) = &loc_101AAD46;
  LODWORD(v17[16]) = ExceptionList;
  this[2] = a2;
  v4 = *(_DWORD *)(a2 + 716);
  if ( !v4 || !*(_DWORD *)(v4 + 308) )
    return 1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  ModelFrame::EnumerateMeshes(v13);
  v12 = 0;
  for ( i = 0; v14 && i < (v15 - (int)v14) >> 2; ++i )
  {
    if ( ModelFrame::GetMesh(*((ModelFrame **)v14 + i), 0) )
    {
      v6 = (ModelFrame **)v14;
      if ( !v14 || i >= (v15 - (int)v14) >> 2 )
      {
        invalid_parameter_noinfo();
        v6 = (ModelFrame **)v14;
      }
      if ( *((_BYTE *)ModelFrame::GetMesh(v6[i], 0) + 120) )
      {
        v12 = 1;
        break;
      }
    }
  }
  v7 = this[2];
  v8 = *(_BYTE *)(v7 + 726);
  *(_BYTE *)(v7 + 726) = v12;
  v9 = *(_DWORD *)(a2 + 716);
  if ( !*(_BYTE *)(v9 + 312) || sub_1007DA10(this, *(ModelFrame **)(v9 + 308)) )
  {
    if ( *(_BYTE *)(this[2] + 726) && StaticModel::GetNumMeshes(*(StaticModel **)(a2 + 716)) == 1 )
      v11 = sub_1000BC40(v17);
    else
      v11 = (float *)sub_10179840(v17);
    qmemcpy((void *)(this[2] + 868), v11, 0x40u);
    *(_BYTE *)(this[2] + 726) = v8;
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this[2] + 716) + 28))(
      *(_DWORD *)(this[2] + 716),
      this[2] + 868,
      this[2] + 856);
    if ( v14 )
      operator delete(v14);
    return 1;
  }
  if ( v14 )
    operator delete(v14);
  return 0;
}
