/*
 * func-name: ?UpdateCorpCmd@GroupManager@GameClient@@QAEXABVVector@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101f6180
 * callers: 0x1000df08
 * callees: 0x10002275, 0x10012aee
 */

int __thiscall GameClient::GroupManager::UpdateCorpCmd(_DWORD *this, _DWORD *a2, void *a3)
{
  double v3; // st7
  int v4; // eax
  char v6; // [esp-2Ch] [ebp-60h] BYREF
  int v7; // [esp-28h] [ebp-5Ch]
  int v8; // [esp-24h] [ebp-58h]
  int v9; // [esp-20h] [ebp-54h]
  int v10; // [esp-1Ch] [ebp-50h]
  int v11; // [esp-18h] [ebp-4Ch]
  int v12; // [esp-14h] [ebp-48h]
  int v13; // [esp-10h] [ebp-44h]
  int v14; // [esp-Ch] [ebp-40h]
  int v15; // [esp-8h] [ebp-3Ch]
  int v16; // [esp-4h] [ebp-38h]
  float v17; // [esp+0h] [ebp-34h]
  int v18; // [esp+4h] [ebp-30h]
  float v19; // [esp+8h] [ebp-2Ch]
  int v20; // [esp+Ch] [ebp-28h]
  float v21; // [esp+18h] [ebp-1Ch]
  float v22; // [esp+1Ch] [ebp-18h]
  float v23; // [esp+20h] [ebp-14h]
  float v24; // [esp+24h] [ebp-10h]
  int v25; // [esp+30h] [ebp-4h]

  this[46] = *a2;
  this[47] = a2[1];
  this[48] = a2[2];
  std::string::operator=(this + 49, a3);
  v3 = 0.0;
  if ( *((_DWORD *)a3 + 5) )
  {
    v20 = 0;
    v19 = 1.0;
    v18 = 1;
    v17 = 15.0;
    v21 = 1.0;
    v24 = 1.0;
    *(float *)&v13 = 1.0;
    v22 = 0.0;
    *(float *)&v14 = 0.0;
    v23 = 0.0;
    *(float *)&v15 = 0.0;
    *(float *)&v16 = 1.0;
    std::string::string(&v6, a3);
    v25 = 0;
    sub_10012AEE();
    v25 = -1;
    sub_10002275(v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
    v3 = 0.0;
  }
  v20 = 0;
  v19 = v3;
  v4 = EventAttemper::Instance(9, 1100);
  return EventAttemper::AddEvent(v4);
}
