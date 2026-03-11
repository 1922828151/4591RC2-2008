/*
 * func-name: sub_101CDE70
 * func-address: 0x101cde70
 * callers: 0x10011c39
 * callees: 0x10003d91, 0x1000d251, 0x1000eaed, 0x10011eb9, 0x102c9ea8
 */

bool __stdcall sub_101CDE70(float a1)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  int v3; // edi
  struct BinStream *Stream; // eax
  int v5; // edx
  unsigned int v6; // ecx
  double v7; // st7
  int v8; // edx
  double v9; // st7
  int v10; // edx
  double v11; // st7
  CDlgMgr *v12; // eax
  struct CTYDialog *v13; // eax
  CDlgMgr *v14; // eax
  float v16; // [esp+1Ch] [ebp-8h]
  float v17; // [esp+20h] [ebp-4h]

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  v3 = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &COccupyEstabUI `RTTI Type Descriptor', 0);
  Stream = Event::GetStream((Event *)LODWORD(a1));
  v5 = *((_DWORD *)Stream + 3);
  v6 = *((_DWORD *)Stream + 2);
  if ( v5 + 4 <= v6 )
  {
    v7 = *(float *)(v5 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v5 + 4;
    a1 = v7;
  }
  v8 = *((_DWORD *)Stream + 3);
  if ( v8 + 4 <= v6 )
  {
    v9 = *(float *)(v8 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v8 + 4;
    v16 = v9;
  }
  v10 = *((_DWORD *)Stream + 3);
  if ( v10 + 4 <= v6 )
  {
    v11 = *(float *)(v10 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v10 + 4;
    v17 = v11;
  }
  if ( v3 )
  {
    COccupyEstabUI::SetRange((COccupyEstabUI *)v3, a1);
    COccupyEstabUI::SetStartProgress((COccupyEstabUI *)v3, v16);
    *(float *)(v3 + 3896) = v17;
    *(_BYTE *)(v3 + 3900) = 0;
    COccupyEstabUI::ResetTime((COccupyEstabUI *)v3);
  }
  v12 = (CDlgMgr *)CDlgMgr::Instance();
  v13 = CDlgMgr::GetDialog(v12);
  if ( _RTDynamicCast(v13, 0, &CTYDialog `RTTI Type Descriptor', &CFixtureUIHeader `RTTI Type Descriptor', 0) )
    sub_1000D251(5);
  v14 = (CDlgMgr *)CDlgMgr::Instance();
  return CDlgMgr::ShowDialog(v14);
}
