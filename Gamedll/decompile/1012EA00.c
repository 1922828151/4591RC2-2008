/*
 * func-name: ?Tick@HookEsbEnergy@@UAEXXZ_0
 * func-address: 0x1012ea00
 * callers: 0x10001a19
 * callees: 0x1001371e, 0x102c9ea8
 */

void __thiscall HookEsbEnergy::Tick(HookEsbEnergy *this)
{
  Editor *v2; // eax
  int Actor; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // [esp+4h] [ebp-74h]
  _DWORD v10[12]; // [esp+8h] [ebp-70h] BYREF
  _BYTE v11[48]; // [esp+38h] [ebp-40h] BYREF
  int v12; // [esp+68h] [ebp-10h]
  int v13; // [esp+6Ch] [ebp-Ch]
  int v14; // [esp+70h] [ebp-8h]

  v2 = (Editor *)Editor::Instance(v9, v10[0]);
  if ( Editor::GetEditorMode(v2) )
  {
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 1080, (char *)this + 1108) )
    {
      Actor = World::FindActor(*((_DWORD *)this + 178), (char *)this + 1080);
      *((_DWORD *)this + 284) = _RTDynamicCast(
                                  Actor,
                                  0,
                                  &Actor `RTTI Type Descriptor',
                                  &HookEstablishment `RTTI Type Descriptor',
                                  0);
      std::string::operator=((char *)this + 1108, (char *)this + 1080);
    }
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 1140, (char *)this + 1168) )
    {
      v4 = World::FindActor(*((_DWORD *)this + 178), (char *)this + 1140);
      *((_DWORD *)this + 299) = _RTDynamicCast(
                                  v4,
                                  0,
                                  &Actor `RTTI Type Descriptor',
                                  &HookEstablishment `RTTI Type Descriptor',
                                  0);
      std::string::operator=((char *)this + 1168, (char *)this + 1140);
    }
    if ( *((_DWORD *)this + 155) )
    {
      if ( *((_BYTE *)this + 441) )
      {
        sub_1001371E((int)this + 868);
        v5 = *((_DWORD *)this + 216);
        v6 = *((_DWORD *)this + 214);
        v13 = *((_DWORD *)this + 215);
        v14 = v5;
        v12 = v6;
        v7 = **((_DWORD **)this + 155);
        v8 = NxHelper::ToNxMat34(v10, v11);
        (*(void (__thiscall **)(_DWORD, int))(v7 + 20))(*((_DWORD *)this + 155), v8);
      }
    }
    Actor::Tick(this);
  }
  else
  {
    *((float *)this + 205) = 0.0;
    Actor::Tick(this);
  }
}
