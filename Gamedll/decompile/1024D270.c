/*
 * func-name: sub_1024D270
 * func-address: 0x1024d270
 * callers: 0x100191be
 * callees: 0x102c9d50
 */

void sub_1024D270()
{
  void *v0; // [esp-4h] [ebp-4h]

  if ( dword_103B7850 )
  {
    v0 = dword_103B7850;
    *(_DWORD *)dword_103B7850 = &GameClient::AIRobotRebornPointManager::`vftable';
    operator delete(v0);
  }
  dword_103B7850 = 0;
}
