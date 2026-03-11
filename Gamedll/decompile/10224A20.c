/*
 * func-name: ?OnReadVarComplete@FControlledEstab@GameClient@@UAEXXZ_0
 * func-address: 0x10224a20
 * callers: 0x1000a795
 * callees: 0x100021b2
 */

void __thiscall GameClient::FControlledEstab::OnReadVarComplete(GameClient::FControlledEstab *this)
{
  unsigned __int8 (__cdecl *v2)(char *, void *); // ebx
  int v3; // eax
  _DWORD *v4; // eax
  void (__thiscall **v5)(_DWORD, int, _DWORD); // ebx
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  void (__thiscall **v9)(_DWORD, int, _DWORD); // ebx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  void (__thiscall **v13)(_DWORD, int, _DWORD); // ebx
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  void (__thiscall **v17)(_DWORD, int, _DWORD); // ebx
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  void (__thiscall **v21)(_DWORD, int, _DWORD); // edi
  int v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  const char *v26; // eax

  GameClient::FEstablishment::OnReadVarComplete(this);
  v2 = (unsigned __int8 (__cdecl *)(char *, void *))std::operator!=<char>;
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 520, &unk_1031A547) )
  {
    v3 = AudioDevice::Instance();
    v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
    *((_DWORD *)this + 263) = v4;
    v5 = (void (__thiscall **)(_DWORD, int, _DWORD))(*v4 + 4);
    v6 = std::string::c_str((char *)this + 520);
    (*v5)(*((_DWORD *)this + 263), v6, 0);
    v2 = (unsigned __int8 (__cdecl *)(char *, void *))std::operator!=<char>;
  }
  if ( v2((char *)this + 552, &unk_1031A553) )
  {
    v7 = AudioDevice::Instance();
    v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
    *((_DWORD *)this + 264) = v8;
    v9 = (void (__thiscall **)(_DWORD, int, _DWORD))(*v8 + 4);
    v10 = std::string::c_str((char *)this + 552);
    (*v9)(*((_DWORD *)this + 264), v10, 0);
    v2 = (unsigned __int8 (__cdecl *)(char *, void *))std::operator!=<char>;
  }
  if ( v2((char *)this + 584, &unk_1031A565) )
  {
    v11 = AudioDevice::Instance();
    v12 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 12))(v11);
    *((_DWORD *)this + 265) = v12;
    v13 = (void (__thiscall **)(_DWORD, int, _DWORD))(*v12 + 4);
    v14 = std::string::c_str((char *)this + 584);
    (*v13)(*((_DWORD *)this + 265), v14, 0);
    v2 = (unsigned __int8 (__cdecl *)(char *, void *))std::operator!=<char>;
  }
  if ( v2((char *)this + 712, &unk_1031A566) )
  {
    v15 = AudioDevice::Instance();
    v16 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 12))(v15);
    *((_DWORD *)this + 266) = v16;
    v17 = (void (__thiscall **)(_DWORD, int, _DWORD))(*v16 + 4);
    v18 = std::string::c_str((char *)this + 712);
    (*v17)(*((_DWORD *)this + 266), v18, 0);
    v2 = (unsigned __int8 (__cdecl *)(char *, void *))std::operator!=<char>;
  }
  if ( v2((char *)this + 844, &unk_1031A567) )
  {
    v19 = AudioDevice::Instance();
    v20 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 12))(v19);
    *((_DWORD *)this + 267) = v20;
    v21 = (void (__thiscall **)(_DWORD, int, _DWORD))(*v20 + 4);
    v22 = std::string::c_str((char *)this + 844);
    (*v21)(*((_DWORD *)this + 267), v22, 0);
  }
  if ( v2((char *)this + 652, &unk_1031A58D)
    && !(unsigned __int8)AnimationSet::Load((char *)this + 964, (char *)this + 652, (char *)this + 652, 0, 0, 0) )
  {
    v23 = (const char *)std::string::c_str((char *)this + 652);
    Error("Load Animation %s is failed", v23);
  }
  if ( v2((char *)this + 680, &unk_1031A58E)
    && !(unsigned __int8)AnimationSet::Load((char *)this + 1008, (char *)this + 680, (char *)this + 680, 1, 0, 0) )
  {
    v24 = (const char *)std::string::c_str((char *)this + 680);
    Error("Load Animation %s is failed", v24);
  }
  if ( v2((char *)this + 752, &unk_1031A58F)
    && !(unsigned __int8)AnimationSet::Load((char *)this + 876, (char *)this + 752, (char *)this + 752, 0, 0, 0) )
  {
    v25 = (const char *)std::string::c_str((char *)this + 752);
    Error("Load Animation %s is failed", v25);
  }
  if ( v2((char *)this + 780, &unk_1031A5A5) )
  {
    if ( !(unsigned __int8)AnimationSet::Load((char *)this + 920, (char *)this + 780, (char *)this + 780, 1, 0, 0) )
    {
      v26 = (const char *)std::string::c_str((char *)this + 780);
      Error("Load Animation %s is failed", v26);
    }
  }
}
