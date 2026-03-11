/*
 * func-name: ?LoadResource@NonControlledEstab@GameClient@@UAE_NXZ_0
 * func-address: 0x101b0780
 * callers: 0x10014e02
 * callees: 0x100030da, 0x102c9d62
 */

char __thiscall GameClient::NonControlledEstab::LoadResource(GameClient::NonControlledEstab *this)
{
  int *v2; // eax
  int v3; // eax
  bool v4; // cf
  int v5; // eax
  _BYTE v7[12]; // [esp+Ch] [ebp-78h] BYREF
  _BYTE v8[48]; // [esp+18h] [ebp-6Ch] BYREF
  int v9; // [esp+48h] [ebp-3Ch]
  int v10; // [esp+4Ch] [ebp-38h]
  int v11; // [esp+50h] [ebp-34h]
  _DWORD v12[7]; // [esp+58h] [ebp-2Ch] BYREF
  int v13; // [esp+80h] [ebp-4h]

  GameClient::Establishment::LoadResource(this);
  if ( *((_BYTE *)this + 464) )
  {
    (*(void (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 12))((char *)this + 148, v8);
    v2 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*((_DWORD *)this + 37) + 8))((char *)this + 148, v7);
    v9 = *v2;
    v10 = v2[1];
    v11 = v2[2];
    std::string::string(v12, (void *)(*((_DWORD *)this + 2) + 196));
    v3 = *((_DWORD *)this + 3);
    v4 = *(_BYTE *)(*((_DWORD *)this + 114) + 516) != 0;
    v13 = 0;
    v5 = NxPhysics::Instance(0, v3, v12, v8, v4 ? 8 : 2);
    *((_DWORD *)this + 115) = NxPhysics::CreateMeshActor(v5);
    v13 = -1;
    std::string::~string(v12);
  }
  return 1;
}
