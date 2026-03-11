/*
 * func-name: ?DeserializationComplete@HookEsbAirDrop@@UAEXXZ_0
 * func-address: 0x1012da20
 * callers: 0x1000bfa5
 * callees: 0x102c9d98
 */

void __thiscall HookEsbAirDrop::DeserializationComplete(HookEsbAirDrop *this)
{
  Editor *v2; // eax
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  Actor *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _BYTE v10[28]; // [esp-28h] [ebp-A4h] BYREF
  _BYTE *v11; // [esp-Ch] [ebp-88h]
  char *v12; // [esp-8h] [ebp-84h]
  int v13; // [esp-4h] [ebp-80h]
  int v14; // [esp+0h] [ebp-7Ch]
  int v15; // [esp+4h] [ebp-78h]
  Actor *v16; // [esp+10h] [ebp-6Ch]
  _BYTE v17[28]; // [esp+14h] [ebp-68h] BYREF
  _DWORD v18[16]; // [esp+30h] [ebp-4Ch] BYREF
  int v19; // [esp+78h] [ebp-4h]

  v2 = (Editor *)Editor::Instance(v14, v15);
  if ( Editor::GetEditorMode(v2) )
  {
    v3 = *((_DWORD *)this + 214);
    v4 = *((_DWORD *)this + 216);
    qmemcpy(v18, (char *)this + 868, sizeof(v18));
    v5 = *((_DWORD *)this + 215);
    v18[12] = v3;
    v18[13] = v5;
    v18[14] = v4;
    v6 = (Actor *)operator new(0x41Cu);
    v16 = v6;
    v19 = 0;
    if ( v6 )
    {
      Actor::Actor(v6, *((struct World **)this + 178));
      *(_DWORD *)v6 = &Actor::`vftable';
    }
    else
    {
      v6 = 0;
    }
    v13 = (int)"_Locate";
    v12 = (char *)this + 444;
    v11 = v17;
    v19 = -1;
    *((_DWORD *)this + 301) = v6;
    v7 = std::operator+<char>(v11, v12, v13);
    v8 = *((_DWORD *)this + 301);
    v19 = 1;
    std::string::operator=(v8 + 444, v7);
    v19 = -1;
    std::string::~string(v17);
    v13 = 1;
    v12 = 0;
    v11 = 0;
    v16 = (Actor *)v10;
    std::string::string(v10, "Arrow.xml");
    *(_DWORD *)(*((_DWORD *)this + 301) + 716) = Precacher::CacheModel();
    v9 = NxPhysics::Instance(*((_DWORD *)this + 301), -1, *(_DWORD *)(*((_DWORD *)this + 301) + 716), v18, 2);
    *(_DWORD *)(*((_DWORD *)this + 301) + 620) = NxPhysics::CreateMeshActor(v9);
  }
}
