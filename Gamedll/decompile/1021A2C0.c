/*
 * func-name: sub_1021A2C0
 * func-address: 0x1021a2c0
 * callers: 0x100026ad
 * callees: 0x1000516e, 0x1000d6de
 */

char __thiscall sub_1021A2C0(_DWORD *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  char v5; // [esp-20h] [ebp-40h] BYREF
  int v6; // [esp-1Ch] [ebp-3Ch]
  int v7; // [esp-18h] [ebp-38h]
  int v8; // [esp-14h] [ebp-34h]
  int v9; // [esp-10h] [ebp-30h]
  int v10; // [esp-Ch] [ebp-2Ch]
  int v11; // [esp-8h] [ebp-28h]
  int v12; // [esp-4h] [ebp-24h]
  char *v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-4h]

  v2 = (EventAttemper *)EventAttemper::Instance(this[3], 1);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(this[4], 1);
  EventAttemper::RemoveObserver(v3);
  v12 = -1;
  v13 = &v5;
  std::string::string(&v5, &unk_10319425);
  v14 = 0;
  Game::Instance();
  v14 = -1;
  Game::NewMap(v5, v6, v7, v8, v9, v10, v11, v12);
  return 1;
}
