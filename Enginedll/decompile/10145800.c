/*
 * func-name: ?Initialize@NxPhysics@@QAEXXZ
 * func-address: 0x10145800
 * callers: 0x10097ea0, 0x10145cd0, 0x10145d50
 * callees: 0x10009730, 0x1007ec70, 0x100956d0, 0x10144910, 0x101465b0, 0x101a24a6, 0x101a24ac, 0x101a2534
 */

void __thiscall NxPhysics::Initialize(NxPhysics *this)
{
  int PhysicsSDK; // eax
  void *v3; // eax
  int v4; // eax
  void *v5; // eax
  void *v6; // esi
  int v7; // ecx
  int *v8; // eax
  _DWORD v9[5]; // [esp+Ch] [ebp-20h] BYREF
  int v10; // [esp+28h] [ebp-4h]

  if ( !*((_DWORD *)this + 2) )
  {
    v9[0] = 0x10000;
    v9[2] = 2048;
    v9[1] = 256;
    v9[4] = 0;
    v9[3] = 0;
    PhysicsSDK = NxCreatePhysicsSDK(34078720, 0, &off_10282DB4, v9, 0);
    *((_DWORD *)this + 2) = PhysicsSDK;
    if ( !PhysicsSDK )
    {
      Error((char *)&byte_101CC3E8);
      return;
    }
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)PhysicsSDK + 8))(PhysicsSDK, 1, 0.0099999998);
    Editor::Instance();
  }
  if ( !*((_DWORD *)this + 4) )
  {
    v3 = operator new(0x18u);
    v10 = 0;
    if ( v3 )
      v4 = sub_101465B0(v3);
    else
      v4 = 0;
    v10 = -1;
    *((_DWORD *)this + 4) = v4;
  }
  if ( !dword_11241C20 )
  {
    v5 = operator new(0x1B7764u);
    v6 = v5;
    v10 = 1;
    if ( v5 )
      sub_10009730((int)v5, 12, 150003, (int (__thiscall *)(int))sub_100012D0);
    else
      v6 = 0;
    dword_11241C20 = v6;
    v10 = -1;
  }
  if ( !dword_11241C24 )
  {
    dword_11241C24 = operator new(0x927CCu);
    v7 = 2;
    v8 = (int *)((char *)dword_11241C24 + 8);
    do
    {
      *(v8 - 2) = v7 - 2;
      *v8 = v7;
      *(v8 - 1) = v7 - 1;
      v7 += 3;
      v8 += 3;
    }
    while ( v7 < 150002 );
  }
  NxPhysics::Reset(this);
  NxInitCooking(0, 0);
  *(_BYTE *)this = 0;
}
