/*
 * func-name: ?Tick@HookEsbStore@@UAEXXZ_0
 * func-address: 0x1012ecd0
 * callers: 0x10004c78
 * callees: 0x1001371e, 0x102c9ea8
 */

void __thiscall HookEsbStore::Tick(HookEsbStore *this)
{
  Editor *v2; // eax
  int Actor; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // [esp+0h] [ebp-74h]
  _DWORD v9[12]; // [esp+4h] [ebp-70h] BYREF
  _BYTE v10[48]; // [esp+34h] [ebp-40h] BYREF
  int v11; // [esp+64h] [ebp-10h]
  int v12; // [esp+68h] [ebp-Ch]
  int v13; // [esp+6Ch] [ebp-8h]

  v2 = (Editor *)Editor::Instance(v8, v9[0]);
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
    if ( *((_DWORD *)this + 155) )
    {
      if ( *((_BYTE *)this + 441) )
      {
        sub_1001371E((int)this + 868);
        v4 = *((_DWORD *)this + 216);
        v5 = *((_DWORD *)this + 214);
        v12 = *((_DWORD *)this + 215);
        v13 = v4;
        v11 = v5;
        v6 = **((_DWORD **)this + 155);
        v7 = NxHelper::ToNxMat34(v9, v10);
        (*(void (__thiscall **)(_DWORD, int))(v6 + 20))(*((_DWORD *)this + 155), v7);
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
