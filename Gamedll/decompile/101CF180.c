/*
 * func-name: ?StopCast@AAlarm@GameClient@@UAEXXZ_0
 * func-address: 0x101cf180
 * callers: 0x10012d0a
 * callees: 0x10006a19, 0x1000fa1a, 0x10019a0b, 0x102c9ea8
 */

void __usercall GameClient::AAlarm::StopCast(GameClient::AAlarm *this@<ecx>, int a2@<edi>)
{
  CDlgMgr *v3; // eax
  struct CTYDialog *Dialog; // eax
  CAlarmMessageUI *v5; // eax
  CDlgMgr *v6; // eax
  struct CTYDialog *v7; // eax
  CRadarMapUI *v8; // eax

  if ( GameClient::WorldObject::IsLocal(*((GameClient::WorldObject **)this + 8)) )
  {
    v3 = (CDlgMgr *)CDlgMgr::Instance();
    Dialog = CDlgMgr::GetDialog(v3);
    v5 = (CAlarmMessageUI *)_RTDynamicCast(
                              Dialog,
                              &CTYDialog `RTTI Type Descriptor',
                              &CAlarmMessageUI `RTTI Type Descriptor',
                              0,
                              a2);
    if ( v5 )
      CAlarmMessageUI::RemoveAlarmMessage(v5, *((_DWORD *)this + 3));
    v6 = (CDlgMgr *)CDlgMgr::Instance();
    v7 = CDlgMgr::GetDialog(v6);
    v8 = (CRadarMapUI *)_RTDynamicCast(
                          v7,
                          15,
                          0,
                          &CTYDialog `RTTI Type Descriptor',
                          &CRadarMapUI `RTTI Type Descriptor');
    if ( v8 )
      CRadarMapUI::RemoveAlarmArea(v8, *((_DWORD *)this + 3));
  }
  GameClient::Aura::StopCast(this);
}
