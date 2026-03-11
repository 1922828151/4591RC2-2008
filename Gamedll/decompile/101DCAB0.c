/*
 * func-name: sub_101DCAB0
 * func-address: 0x101dcab0
 * callers: 0x10002761
 * callees: 0x10004cc8, 0x10013c78, 0x1001787d, 0x1001a5e6, 0x102c9d98
 */

char __thiscall sub_101DCAB0(_DWORD *this)
{
  char result; // al
  unsigned int v3; // eax
  _DWORD *v4; // eax
  EventAttemper *v5; // eax
  int v6; // eax
  int v7; // [esp+4h] [ebp-18h]
  int v8; // [esp+4h] [ebp-18h]
  int v9; // [esp+8h] [ebp-14h]
  int v10; // [esp+8h] [ebp-14h]

  result = sub_10004CC8();
  if ( result )
  {
    v3 = _time64(0);
    srand(v3);
    v4 = operator new(4u);
    if ( v4 )
      *v4 = &GameClient::AIRobotEqupment::`vftable';
    v5 = (EventAttemper *)EventAttemper::Instance(19, 5312);
    EventAttemper::AddObserver(v5);
    if ( operator new(0x38u) )
      v6 = sub_10013C78();
    else
      v6 = 0;
    this[4] = v6;
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 24))(v6);
    sub_1001A5E6(v7, v9);
    sub_1001787D(v8, v10);
    return 1;
  }
  return result;
}
