/*
 * func-name: ?PostRender@NxPhysics@@QAEXXZ
 * func-address: 0x10145a20
 * callers: 0x101396e0
 * callees: 0x10064610, 0x101445d0
 */

void __thiscall NxPhysics::PostRender(NxPhysics *this)
{
  int v2; // ecx
  struct Canvas *v3; // eax
  struct Canvas *v4; // eax
  struct Canvas *v5; // eax
  struct Canvas *v6; // eax
  struct Canvas *v7; // eax
  struct Canvas *v8; // eax
  struct Canvas *v9; // eax
  struct Canvas *v10; // eax
  struct Canvas *v11; // eax
  struct Canvas *v12; // eax
  _DWORD v13[2]; // [esp+1Ch] [ebp-50h] BYREF
  int v14; // [esp+24h] [ebp-48h]
  int v15; // [esp+28h] [ebp-44h]
  int v16; // [esp+2Ch] [ebp-40h]
  int v17; // [esp+30h] [ebp-3Ch]
  int v18; // [esp+34h] [ebp-38h]
  int v19; // [esp+38h] [ebp-34h]
  int v20; // [esp+3Ch] [ebp-30h]
  int v21; // [esp+40h] [ebp-2Ch]
  int v22; // [esp+44h] [ebp-28h]
  int v23; // [esp+48h] [ebp-24h]
  int v24; // [esp+4Ch] [ebp-20h]
  int v25; // [esp+50h] [ebp-1Ch]
  int v26; // [esp+54h] [ebp-18h]
  int v27; // [esp+58h] [ebp-14h]
  int v28; // [esp+5Ch] [ebp-10h]
  int v29; // [esp+60h] [ebp-Ch]
  int v30; // [esp+64h] [ebp-8h]
  int v31; // [esp+68h] [ebp-4h]

  if ( *((_BYTE *)this + 1) )
    NxPhysics::DebugRender(this);
  if ( *((_BYTE *)this + 2) )
  {
    if ( *((_DWORD *)this + 3) )
    {
      v2 = *((_DWORD *)this + 3);
      v13[0] = 0;
      v13[1] = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 344))(v2, v13);
      v3 = Canvas::Instance();
      (*(void (__cdecl **)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *))(*(_DWORD *)v3 + 44))(
        v3,
        0,
        -1,
        10.0,
        140.0,
        "_PhysX Stats_");
      v4 = Canvas::Instance();
      (*(void (**)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)v4 + 44))(
        v4,
        0,
        -1,
        10.0,
        158.0,
        "Actors: %i",
        v22);
      v5 = Canvas::Instance();
      (*(void (**)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)v5 + 44))(
        v5,
        0,
        -1,
        10.0,
        176.0,
        "Contacts: %i",
        v13[0]);
      v6 = Canvas::Instance();
      (*(void (**)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)v6 + 44))(
        v6,
        0,
        -1,
        10.0,
        194.0,
        "Dynamic Actors: %i",
        v24);
      v7 = Canvas::Instance();
      (*(void (**)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)v7 + 44))(
        v7,
        0,
        -1,
        10.0,
        212.0,
        "Dynamic Actors Awake: %i",
        v16);
      v8 = Canvas::Instance();
      (*(void (**)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)v8 + 44))(
        v8,
        0,
        -1,
        10.0,
        230.0,
        "Dynamic Shapes: %i",
        v28);
      v9 = Canvas::Instance();
      (*(void (**)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)v9 + 44))(
        v9,
        0,
        -1,
        10.0,
        248.0,
        "Joints: %i",
        v30);
      v10 = Canvas::Instance();
      (*(void (**)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)v10 + 44))(
        v10,
        0,
        -1,
        10.0,
        266.0,
        "Pairs: %i",
        v14);
      v11 = Canvas::Instance();
      (*(void (**)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)v11 + 44))(
        v11,
        0,
        -1,
        10.0,
        284.0,
        "Solver Bodies: %i",
        v20);
      v12 = Canvas::Instance();
      (*(void (**)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)v12 + 44))(
        v12,
        0,
        -1,
        10.0,
        302.0,
        "Static Shapes: %i",
        v26);
    }
  }
}
