/*
 * func-name: ?Tick@HookAlarmArea@@UAEXXZ_0
 * func-address: 0x1012ef10
 * callers: 0x1000f835
 * callees: 0x1001371e, 0x102c9ea8
 */

void __thiscall HookAlarmArea::Tick(HookAlarmArea *this)
{
  Editor *v2; // eax
  int Actor; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // [esp+4h] [ebp-74h]
  _DWORD v11[12]; // [esp+8h] [ebp-70h] BYREF
  _BYTE v12[48]; // [esp+38h] [ebp-40h] BYREF
  int v13; // [esp+68h] [ebp-10h]
  int v14; // [esp+6Ch] [ebp-Ch]
  int v15; // [esp+70h] [ebp-8h]

  v2 = (Editor *)Editor::Instance(v10, v11[0]);
  if ( Editor::GetEditorMode(v2) )
  {
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 1052, (char *)this + 1080) )
    {
      Actor = World::FindActor(*((_DWORD *)this + 178), (char *)this + 1052);
      *((_DWORD *)this + 277) = _RTDynamicCast(
                                  Actor,
                                  0,
                                  &Actor `RTTI Type Descriptor',
                                  &HookEstablishment `RTTI Type Descriptor',
                                  0);
      std::string::operator=((char *)this + 1080, (char *)this + 1052);
    }
    v4 = *((_DWORD *)this + 277);
    if ( v4 )
      *((_DWORD *)this + 278) = *(_DWORD *)(v4 + 1296);
    else
      *((_DWORD *)this + 278) = -1;
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 1116, (char *)this + 1144) )
    {
      v5 = World::FindActor(*((_DWORD *)this + 178), (char *)this + 1116);
      *((_DWORD *)this + 293) = _RTDynamicCast(
                                  v5,
                                  0,
                                  &Actor `RTTI Type Descriptor',
                                  &HookAlarmArea `RTTI Type Descriptor',
                                  0);
      std::string::operator=((char *)this + 1144, (char *)this + 1116);
    }
    if ( *((_DWORD *)this + 155) )
    {
      if ( *((_BYTE *)this + 441) )
      {
        sub_1001371E((int)this + 868);
        v6 = *((_DWORD *)this + 216);
        v7 = *((_DWORD *)this + 214);
        v14 = *((_DWORD *)this + 215);
        v15 = v6;
        v13 = v7;
        v8 = **((_DWORD **)this + 155);
        v9 = NxHelper::ToNxMat34(v11, v12);
        (*(void (__thiscall **)(_DWORD, int))(v8 + 20))(*((_DWORD *)this + 155), v9);
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
