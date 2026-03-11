/*
 * func-name: sub_10036540
 * func-address: 0x10036540
 * callers: 0x1000c9c3
 * callees: 0x10001dfc, 0x100029cd, 0x10012c79, 0x10013e2b, 0x102c2990, 0x102c9ea8
 */

GameClient::Robot *__thiscall sub_10036540(void *this, int *a2)
{
  GameClient::Robot *result; // eax
  float *v4; // esi
  int v5; // eax
  GameClient::Robot *v6; // edi
  float *EyesLocation; // eax
  float v8; // [esp+4h] [ebp-64h]
  float v9; // [esp+8h] [ebp-60h]
  float v10; // [esp+Ch] [ebp-5Ch]
  float v11; // [esp+14h] [ebp-54h]
  float v12; // [esp+18h] [ebp-50h]
  int v13[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  _BYTE v14[64]; // [esp+28h] [ebp-40h] BYREF

  result = (GameClient::Robot *)a2;
  if ( a2 )
  {
    if ( *(_DWORD *)this )
    {
      result = (GameClient::Robot *)sub_10001DFC(a2[73]);
      v4 = (float *)result;
      if ( result )
      {
        v5 = sub_10001DFC(*(_DWORD *)(*(_DWORD *)this + 292));
        result = (GameClient::Robot *)_RTDynamicCast(
                                        v5,
                                        0,
                                        &GameClient::WorldObject `RTTI Type Descriptor',
                                        &GameClient::Robot `RTTI Type Descriptor',
                                        0);
        v6 = result;
        if ( result )
        {
          v8 = v4[6];
          v9 = v4[7];
          v10 = v4[8];
          EyesLocation = (float *)GameClient::Robot::GetEyesLocation(result);
          v11 = EyesLocation[1];
          v12 = EyesLocation[2];
          *(float *)v13 = v8 - *EyesLocation;
          *(float *)&v13[1] = v9 - v11;
          *(float *)&v13[2] = v10 - v12;
          sub_100029CD();
          result = (GameClient::Robot *)sub_10013E2B();
          if ( !(_BYTE)result )
          {
            sub_102C2990(v14, (int)v13);
            return (GameClient::Robot *)(*(int (__thiscall **)(GameClient::Robot *, _BYTE *))(*(_DWORD *)v6 + 40))(
                                          v6,
                                          v14);
          }
        }
      }
    }
  }
  return result;
}
