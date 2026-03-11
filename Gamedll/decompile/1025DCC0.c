/*
 * func-name: sub_1025DCC0
 * func-address: 0x1025dcc0
 * callers: 0x10018813
 * callees: 0x10003d82, 0x10003fe9, 0x100070ef, 0x1000ab4b, 0x10019551, 0x102c9d50, 0x102c9d62, 0x102c9ea8, 0x102ca13e
 */

void __stdcall sub_1025DCC0(Event *a1)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  CTYDialog *v3; // edi
  int v4; // esi
  struct BinStream *Stream; // eax
  int v6; // ecx
  CDlgMgr *v7; // eax
  unsigned __int8 v8; // bl
  struct BinStream *v9; // esi
  size_t v10; // edi
  int v11; // eax
  int v12; // eax
  CDlgMgr *v13; // eax
  unsigned __int8 v14; // [esp+1Fh] [ebp-59h]
  int v15; // [esp+20h] [ebp-58h]
  int v16; // [esp+24h] [ebp-54h] BYREF
  void *v17; // [esp+28h] [ebp-50h]
  int v18; // [esp+2Ch] [ebp-4Ch]
  int v19; // [esp+30h] [ebp-48h]
  CTYDialog *v20; // [esp+34h] [ebp-44h]
  int v21; // [esp+38h] [ebp-40h] BYREF
  int v22[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  _BYTE v23[28]; // [esp+4Ch] [ebp-2Ch] BYREF
  int v24; // [esp+74h] [ebp-4h]

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  v3 = (CTYDialog *)_RTDynamicCast(
                      Dialog,
                      0,
                      &CTYDialog `RTTI Type Descriptor',
                      &CControlCenterListUI `RTTI Type Descriptor');
  v20 = v3;
  if ( v3 )
  {
    v4 = 0;
    Stream = Event::GetStream(a1);
    v6 = *((_DWORD *)Stream + 3);
    if ( (unsigned int)(v6 + 4) <= *((_DWORD *)Stream + 2)
      && (v4 = *(_DWORD *)(v6 + *((_DWORD *)Stream + 1)), *((_DWORD *)Stream + 3) = v6 + 4, v4 == -1) )
    {
      if ( (unsigned __int8)CTYDialog::GetVisible(v3) )
      {
        v7 = (CDlgMgr *)CDlgMgr::Instance();
        CDlgMgr::ShowDialog(v7);
      }
    }
    else
    {
      std::string::string(v23);
      v24 = 2;
      memset(&v22[1], 0, 12);
      v17 = 0;
      v18 = 0;
      v19 = 0;
      if ( v4 > 0 )
      {
        v8 = v14;
        v15 = v4;
        do
        {
          v9 = Event::GetStream(a1);
          v10 = sub_10003D82();
          v11 = *((_DWORD *)v9 + 3);
          if ( v11 + v10 <= *((_DWORD *)v9 + 2) )
          {
            memcpy(byte_103B6158, (const void *)(v11 + *((_DWORD *)v9 + 1)), v10);
            byte_103B6158[v10] = 0;
            std::string::operator=(v23, byte_103B6158);
            *((_DWORD *)v9 + 3) += v10;
          }
          v12 = *((_DWORD *)v9 + 3);
          if ( (unsigned int)(v12 + 1) <= *((_DWORD *)v9 + 2) )
          {
            v8 = *(_BYTE *)(v12 + *((_DWORD *)v9 + 1));
            *((_DWORD *)v9 + 3) = v12 + 1;
          }
          sub_1000AB4B(v22, v23);
          v21 = v8;
          sub_10019551((int)&v21);
          --v15;
        }
        while ( v15 );
      }
      CControlCenterListUI::SetControlCenterList((int)v22, (int)&v16);
      v13 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::ShowDialog(v13);
      if ( v17 )
        operator delete(v17);
      v17 = 0;
      v18 = 0;
      v19 = 0;
      LOBYTE(v24) = 0;
      sub_10003FE9();
      v24 = -1;
      std::string::~string(v23);
    }
  }
}
