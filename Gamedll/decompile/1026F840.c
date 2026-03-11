/*
 * func-name: ?EstablishmentUIEvent@CEstablishmentUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x1026f840
 * callers: 0x10009de0
 * callees: 0x10001faf, 0x100021a3, 0x1000adc6, 0x1000dafd, 0x10012e72, 0x102c9d98, 0x102c9ea8
 */

void __stdcall CEstablishmentUI::EstablishmentUIEvent(
        int a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  CEstablishmentUI *v6; // eax
  CEstablishmentUI *v7; // esi
  _DWORD *v8; // eax
  EventAttemper *v9; // eax
  EventAttemper *v10; // eax
  CRECheckBox *v11; // ecx
  CDlgMgr *v12; // eax
  GameClient::EstabManager *v13; // eax
  GameClient::Establishment *Establishment; // edi
  GameClient::EstabManager *v15; // eax
  GameClient::EstabManager *v16; // eax
  unsigned int v17; // [esp+4h] [ebp-10h]
  unsigned int v18; // [esp+4h] [ebp-10h]
  unsigned int v19; // [esp+4h] [ebp-10h]

  v6 = (CEstablishmentUI *)_RTDynamicCast(
                             a1,
                             0,
                             &CREDialog `RTTI Type Descriptor',
                             &CEstablishmentUI `RTTI Type Descriptor');
  v7 = v6;
  if ( !v6 )
    return;
  if ( a2 == 24 )
  {
    if ( a5 )
    {
      v8 = operator new(4u);
      if ( v8 )
        *v8 = &PassInputedObserver::`vftable';
      v9 = (EventAttemper *)EventAttemper::Instance(9, 4201);
      *((_DWORD *)v7 + 968) = EventAttemper::AddObserver(v9);
    }
    else
    {
      v10 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)v6 + 968), 1);
      EventAttemper::RemoveObserver(v10);
    }
    return;
  }
  if ( a3 == 6 )
  {
    v19 = *((_DWORD *)v6 + 977);
    v16 = GameClient::EstabManager::Instance();
    Establishment = GameClient::EstabManager::GetEstablishment(v16, v19);
    if ( !Establishment )
      return;
    goto LABEL_20;
  }
  if ( a3 == 7 )
  {
    v18 = *((_DWORD *)v6 + 977);
    v15 = GameClient::EstabManager::Instance();
    Establishment = GameClient::EstabManager::GetEstablishment(v15, v18);
    if ( !Establishment )
      return;
    goto LABEL_20;
  }
  if ( a3 != 8 )
    return;
  v11 = (CRECheckBox *)*((_DWORD *)v6 + 976);
  if ( !*((_BYTE *)v11 + 816) )
  {
    v17 = *((_DWORD *)v6 + 977);
    *((_DWORD *)v6 + 969) = -1;
    v13 = GameClient::EstabManager::Instance();
    Establishment = GameClient::EstabManager::GetEstablishment(v13, v17);
    if ( !Establishment )
      return;
LABEL_20:
    a2 = 0;
    a1 = -1;
    CEstablishmentUI::GetLock(v7, (int *)&a2, &a1);
    GameClient::Establishment::SubmitEstabInfo(Establishment, a2, a1);
    return;
  }
  CRECheckBox::SetChecked(v11, 0);
  a2 = 0;
  sub_100021A3(4, (int)&a2);
  if ( a2 )
    *(_BYTE *)(a2 + 3876) = 0;
  v12 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v12);
}
