/*
 * func-name: ?DoInstancing@ActorInstancer@@QAEXXZ
 * func-address: 0x100542a0
 * callers: 0x100544c0, 0x100546d0
 * callees: 0x10011e50, 0x1004ef90, 0x100507a0, 0x1007eb80, 0x1007ec70, 0x10084120
 */

void __thiscall ActorInstancer::DoInstancing(ActorInstancer *this)
{
  _DWORD *v1; // eax
  int v3; // ecx
  unsigned int i; // esi
  bool v5; // zf
  int v6; // esi
  int (__thiscall *v7)(int); // eax
  int v8; // eax
  char *v9; // ebx
  int v10; // eax
  char *v11; // esi
  Editor *v12; // eax
  Editor *v13; // eax
  char v14; // [esp-20h] [ebp-34h] BYREF
  int v15; // [esp-1Ch] [ebp-30h]
  int v16; // [esp-18h] [ebp-2Ch]
  int v17; // [esp-14h] [ebp-28h]
  int v18; // [esp-10h] [ebp-24h]
  int v19; // [esp-Ch] [ebp-20h]
  int v20; // [esp-8h] [ebp-1Ch]
  struct Actor *v21; // [esp-4h] [ebp-18h]
  char *v22; // [esp+10h] [ebp-4h]

  v1 = Destination;
  v3 = dword_10284758;
  for ( i = 0; v1 && i < (v3 - (int)v1) >> 2; ++i )
  {
    v5 = (unsigned __int8)std::operator==<char>(v1[i] + 1056, (char *)this + 1056) == 0;
    v1 = Destination;
    if ( v5 )
    {
      v3 = dword_10284758;
    }
    else
    {
      if ( !Destination || (v3 = dword_10284758, i >= (dword_10284758 - (int)Destination) >> 2) )
      {
        invalid_parameter_noinfo();
        v3 = dword_10284758;
        v1 = Destination;
      }
      if ( (ActorInstancer *)v1[i] != this )
      {
        if ( !v1 || i >= (v3 - (int)v1) >> 2 )
        {
          invalid_parameter_noinfo();
          v3 = dword_10284758;
          v1 = Destination;
        }
        if ( *(_DWORD *)(v1[i] + 100) )
        {
          if ( !v1 || i >= (v3 - (int)v1) >> 2 )
          {
            invalid_parameter_noinfo();
            v1 = Destination;
          }
          v6 = *(_DWORD *)(v1[i] + 100);
          v7 = *(int (__thiscall **)(int))(*(_DWORD *)v6 + 100);
          v21 = (struct Actor *)*((_DWORD *)this + 178);
          v8 = v7(v6);
          v22 = &v14;
          std::string::string(&v14, v8);
          v9 = (char *)Factory::create(v14, v15, v16, v17, v18, v19, v20, (int)v21);
          (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)v6 + 84))(v6, v9, 1);
          if ( v9 )
            goto LABEL_18;
          break;
        }
      }
    }
  }
  v9 = Actor::ImportFromFile((int)this + 1056, *((struct World **)this + 178));
  if ( !v9 )
    return;
LABEL_18:
  Actor::SetParent(this, (struct Actor *)v9);
  *((_DWORD *)v9 + 64) = *((_DWORD *)this + 64);
  *((_DWORD *)v9 + 65) = *((_DWORD *)this + 65);
  *((_DWORD *)v9 + 66) = *((_DWORD *)this + 66);
  v10 = *((_DWORD *)this + 67);
  v11 = (char *)this + 1084;
  v21 = (ActorInstancer *)((char *)this + 1084);
  *((_DWORD *)v9 + 67) = v10;
  v22 = (char *)this + 1084;
  std::string::operator=(v9 + 444, v21);
  *((_DWORD *)v9 + 214) = *((_DWORD *)this + 214);
  *((_DWORD *)v9 + 215) = *((_DWORD *)this + 215);
  *((_DWORD *)v9 + 216) = *((_DWORD *)this + 216);
  if ( *((_BYTE *)this + 1053) )
  {
    qmemcpy(v9 + 868, (char *)this + 868, 0x40u);
    v11 = v22;
  }
  if ( *((_BYTE *)Editor::Instance() + 2122) )
  {
    if ( !*((_BYTE *)this + 1053) )
    {
      v21 = (struct Actor *)v9;
      v12 = Editor::Instance();
      Editor::MakeNameUnique(v12, v21);
      std::string::operator=(v11, v9 + 444);
      v21 = (struct Actor *)v9;
      v13 = Editor::Instance();
      Editor::SelectActor(v13, v21);
    }
  }
  (*(void (__thiscall **)(char *))(*(_DWORD *)v9 + 12))(v9);
}
