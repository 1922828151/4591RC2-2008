/*
 * func-name: ?OnBegin@BigMapState@@UAEXAAVEvent@@@Z_0
 * func-address: 0x1027d9f0
 * callers: 0x100048f9
 * callees: 0x100022f2, 0x100053c1, 0x10005d17, 0x1001465a, 0x10018e03
 */

void __thiscall BigMapState::OnBegin(BigMapState *this, struct Event *a2)
{
  unsigned int SubID; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax

  SubID = Event::GetSubID(a2);
  if ( SubID > 0x14D3 )
  {
    v6 = SubID - 5600;
    if ( !v6 )
    {
      BigMapState::OnUpdateOccupyIcon((BigMapState *)((char *)this - 8), a2);
      return;
    }
    if ( v6 != 10 )
      return;
    BigMapState::OnUpdateBattlePointLoc((BigMapState *)((char *)this - 8), a2);
LABEL_12:
    BigMapState::OnRobotRelive((BigMapState *)((char *)this - 8), a2);
    return;
  }
  if ( SubID == 5331 )
  {
    BigMapState::OnUpdateRebornLoc((BigMapState *)((char *)this - 8), a2);
    return;
  }
  v4 = SubID - 4106;
  if ( !v4 )
  {
    BigMapState::OnRobotAsphxiaOrDead((BigMapState *)((char *)this - 8), a2);
    return;
  }
  v5 = v4 - 3;
  if ( !v5 || v5 == 41 )
    goto LABEL_12;
}
