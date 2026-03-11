/*
 * func-name: ?Leading@Skill@GameClient@@UAE?AW4SkillState@12@PAVWorldObject@2@_N@Z_0
 * func-address: 0x101d1cc0
 * callers: 0x1000883c
 * callees: 0x1000194c, 0x100077ed, 0x1000b7e4, 0x10010bae, 0x10015bef, 0x10015eab, 0x10017f35, 0x10018fc0, 0x102c0ed0
 */

int __thiscall GameClient::Skill::Leading(
        float *this,
        Outpop::Utility::Ref_Object *a2,
        Outpop::Utility::Ref_Object *a3)
{
  int v4; // ebp
  bool v5; // zf
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  Outpop::Utility::Ref_Object *v11; // ecx
  int result; // eax
  double v13; // st7
  _DWORD *v14; // ecx
  int v15; // edi
  float v16; // [esp+4h] [ebp-68h]
  int v17; // [esp+Ch] [ebp-60h]
  int v18; // [esp+Ch] [ebp-60h]
  float v19; // [esp+10h] [ebp-5Ch]
  int v20; // [esp+2Ch] [ebp-40h] BYREF
  int v21; // [esp+30h] [ebp-3Ch] BYREF
  int v22; // [esp+34h] [ebp-38h]
  int v23; // [esp+38h] [ebp-34h]
  _DWORD v24[3]; // [esp+3Ch] [ebp-30h] BYREF
  int v25; // [esp+48h] [ebp-24h] BYREF
  int v26; // [esp+4Ch] [ebp-20h]
  int v27; // [esp+50h] [ebp-1Ch]
  _BYTE v28[12]; // [esp+54h] [ebp-18h] BYREF
  int v29; // [esp+68h] [ebp-4h]

  v4 = *((_DWORD *)this + 2);
  v5 = (_BYTE)a3 == 0;
  *((_DWORD *)this + 5) = a2;
  if ( !v5 )
  {
    if ( *(_DWORD *)(v4 + 140) )
    {
      result = *((_DWORD *)this + 4);
      if ( result != 3 )
        return result;
      if ( *(float *)(v4 + 144) > 0.0 )
        this[4] = 0.0;
      if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 24))(this)
        || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 5) + 84))(*((_DWORD *)this + 5)) )
      {
        *((_DWORD *)this + 4) = 3;
        return 3;
      }
      v13 = 0.0;
      if ( *(float *)(v4 + 144) > 0.0 )
      {
        v5 = *((_DWORD *)this + 121) == 0;
        this[14] = 0.0;
        this[4] = 0.0;
        if ( !v5 )
        {
          v14 = (_DWORD *)*((_DWORD *)this + 5);
          v25 = v14[6];
          v26 = v14[7];
          v27 = v14[8];
          v18 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*v14 + 44))(v14, v28);
          SoundMgr::Instance();
          SoundMgr::PlaySoundA((int)(this + 107), (int)&v25, v18, 0, COERCE_INT(0.75));
          v13 = 0.0;
        }
        if ( *(_DWORD *)(v4 + 112) == 1 )
        {
          v15 = *((_DWORD *)this + 5);
          v19 = v13;
          v16 = v13;
          if ( (unsigned __int8)GameClient::Robot::PlayAnimation(*((_DWORD *)this + 2) + 232, v16, 1.0, 1.0, v19, 1) )
            *(_BYTE *)(v15 + 920) = 1;
        }
LABEL_12:
        if ( sub_1000194C(0) )
        {
          v7 = (_DWORD *)*((_DWORD *)this + 5);
          v21 = v7[6];
          v22 = v7[7];
          v23 = v7[8];
          sub_102C0ED0(v24);
          if ( *(_DWORD *)(v4 + 112) == 3 )
          {
            v8 = *(_DWORD **)(*((_DWORD *)this + 5) + 148);
            v21 = v8[6];
            v22 = v8[7];
            v23 = v8[8];
            v9 = (_DWORD *)sub_102C0ED0(v28);
            v24[0] = *v9;
            v24[1] = v9[1];
            v24[2] = v9[2];
          }
          v10 = *((_DWORD *)this + 4);
          switch ( v10 )
          {
            case 0:
              sub_100077ED((int)&a3, 9, 170, COERCE_INT(0.0), 1, 512);
              a2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 3);
              v29 = 0;
              sub_10015EAB((int)&a2);
              sub_1000B7E4((int)&v21);
              sub_1000B7E4((int)v24);
              v11 = a3;
              goto LABEL_41;
            case 1:
              sub_100077ED((int)&a3, 9, 171, COERCE_INT(0.0), 1, 512);
              a2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 3);
              v29 = 1;
              sub_10015EAB((int)&a2);
              sub_1000B7E4((int)&v21);
              sub_1000B7E4((int)v24);
              sub_10015BEF((int)(this + 14));
              v11 = a3;
              goto LABEL_41;
            case 3:
              sub_100077ED((int)&a2, 9, 172, COERCE_INT(0.0), 1, 512);
              v20 = *((_DWORD *)this + 3);
              v29 = 2;
              sub_10015EAB((int)&v20);
              sub_1000B7E4((int)&v21);
              sub_1000B7E4((int)v24);
              v11 = a2;
LABEL_41:
              v29 = -1;
              if ( v11 )
                Outpop::Utility::Ref_Object::release(v11);
              break;
          }
        }
        return *((_DWORD *)this + 4);
      }
    }
    else
    {
      if ( *((_DWORD *)this + 4) != 3 )
      {
        *((_DWORD *)this + 4) = 3;
        goto LABEL_12;
      }
      if ( *(float *)(v4 + 144) > 0.0 )
        this[4] = 0.0;
      if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 24))(this)
        || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 5) + 84))(*((_DWORD *)this + 5)) )
      {
        *((_DWORD *)this + 4) = 3;
        return 3;
      }
      if ( *(float *)(v4 + 144) > 0.0 )
      {
        v5 = *((_DWORD *)this + 121) == 0;
        this[14] = 0.0;
        this[4] = 0.0;
        if ( !v5 )
        {
          v6 = (_DWORD *)*((_DWORD *)this + 5);
          v25 = v6[6];
          v26 = v6[7];
          v27 = v6[8];
          v17 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*v6 + 44))(v6, v28);
          SoundMgr::Instance();
          SoundMgr::PlaySoundA((int)(this + 107), (int)&v25, v17, 0, COERCE_INT(0.75));
        }
        goto LABEL_12;
      }
    }
    *((_DWORD *)this + 4) = 1;
    goto LABEL_12;
  }
  result = *((_DWORD *)this + 4);
  if ( *(_DWORD *)(v4 + 140) != 1 )
    return result;
  if ( !result )
  {
    *((_DWORD *)this + 4) = 1;
    goto LABEL_12;
  }
  if ( result != 2 )
    return result;
  if ( *(float *)(v4 + 148) < 0.0 )
  {
    *((_DWORD *)this + 4) = 3;
    goto LABEL_12;
  }
  return 2;
}
