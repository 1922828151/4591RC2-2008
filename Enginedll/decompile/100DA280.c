/*
 * func-name: ?PostRender@IndoorVolume@@UAEXPAVCamera@@@Z
 * func-address: 0x100da280
 * callers: none
 * callees: 0x10001370, 0x1000bc40, 0x1004dd10, 0x10064610, 0x1007ec70, 0x1017a0b0
 */

void __thiscall IndoorVolume::PostRender(IndoorVolume *this, struct Camera *a2)
{
  struct Canvas *v3; // eax
  struct Canvas *v4; // eax
  struct Canvas *v5; // eax
  struct Canvas *v6; // eax
  struct Canvas *v7; // eax
  float v8; // [esp+10h] [ebp-98h]
  float v9; // [esp+10h] [ebp-98h]
  float v10; // [esp+14h] [ebp-94h]
  float v11; // [esp+14h] [ebp-94h]
  float v12; // [esp+18h] [ebp-90h]
  float v13; // [esp+18h] [ebp-90h]
  float v14[3]; // [esp+1Ch] [ebp-8Ch] BYREF
  float v15[3]; // [esp+28h] [ebp-80h] BYREF
  float v16[10]; // [esp+34h] [ebp-74h] BYREF
  float v17[16]; // [esp+5Ch] [ebp-4Ch] BYREF
  int v18; // [esp+A4h] [ebp-4h]

  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    v3 = Canvas::Instance();
    (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)v3 + 92))(v3);
    switch ( *((_DWORD *)this + 275) )
    {
      case 1:
        v10 = *((float *)this + 277) + *((float *)this + 214);
        v8 = *((float *)this + 278) + *((float *)this + 215);
        v12 = *((float *)this + 279) + *((float *)this + 216);
        v14[0] = v10;
        v14[1] = v8;
        v14[2] = v12;
        v13 = *((float *)this + 214) - *((float *)this + 277);
        v9 = *((float *)this + 215) - *((float *)this + 278);
        v11 = *((float *)this + 216) - *((float *)this + 279);
        v15[0] = v13;
        v15[1] = v9;
        v15[2] = v11;
        sub_10001370(v16, v15, v14);
        v18 = 0;
        sub_1000BC40(v17);
        v6 = Canvas::Instance();
        (*(void (__thiscall **)(struct Canvas *, float *, float *, int))(*(_DWORD *)v6 + 136))(v6, v16, v17, -1);
        v18 = -1;
        sub_1017A0B0(v16);
        break;
      case 2:
        v5 = Canvas::Instance();
        (*(void (__thiscall **)(struct Canvas *, char *, _DWORD, int))(*(_DWORD *)v5 + 140))(
          v5,
          (char *)this + 856,
          *((float *)this + 276),
          -1);
        break;
      case 3:
        v4 = Canvas::Instance();
        (*(void (__thiscall **)(struct Canvas *, char *, _DWORD, _DWORD, int))(*(_DWORD *)v4 + 144))(
          v4,
          (char *)this + 856,
          *((float *)this + 280),
          *((float *)this + 281),
          -1);
        break;
    }
    v7 = Canvas::Instance();
    (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)v7 + 100))(v7);
  }
  Actor::PostRender(this, a2);
}
