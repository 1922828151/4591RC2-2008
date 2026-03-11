/*
 * func-name: ?SubmitProduce@CRobotRoofUI@@AAEX_N@Z_0
 * func-address: 0x10284540
 * callers: 0x1000ee44
 * callees: 0x1000194c, 0x10006947, 0x10006acd, 0x1000a506, 0x1000c252, 0x1000d51c, 0x10011bb2, 0x1001a0f5, 0x102c9d50, 0x102c9d98
 */

void __thiscall CRobotRoofUI::SubmitProduce(CRobotRoofUI *this, int a2)
{
  GameClient::FuncManager *v3; // eax
  char *v4; // esi
  int v5; // edi
  unsigned int v6; // ebx
  void *v7; // edi
  unsigned int v8; // edi
  void *v9; // ebx
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  void *v13; // eax
  bool v14; // zf
  unsigned int v15; // [esp+10h] [ebp-58h]
  void *v16; // [esp+28h] [ebp-40h]
  void *v17; // [esp+28h] [ebp-40h]
  struct GameClient::Function *Function; // [esp+2Ch] [ebp-3Ch]
  int v19; // [esp+30h] [ebp-38h] BYREF
  void *v20; // [esp+34h] [ebp-34h]
  void *Source; // [esp+38h] [ebp-30h]
  int v22; // [esp+3Ch] [ebp-2Ch]
  _DWORD v23[7]; // [esp+40h] [ebp-28h] BYREF
  int v24; // [esp+64h] [ebp-4h]

  if ( *((_DWORD *)this + 1006) != -1 )
  {
    v15 = *((_DWORD *)this + 1006);
    v3 = GameClient::FuncManager::Instance();
    Function = GameClient::FuncManager::GetFunction(v3, v15);
    if ( Function )
    {
      v20 = 0;
      Source = 0;
      v22 = 0;
      v24 = 0;
      if ( (_BYTE)a2 )
      {
        v4 = (char *)this + 3916;
        if ( !CRobotRoofUI::MatchingBodyArmor(this, *((_DWORD *)this + 979), *((_DWORD *)this + 980)) )
        {
          sub_1000D51C();
          return;
        }
        v5 = 3;
        do
        {
          sub_1001A0F5(&v19, (int)v4);
          v4 += 4;
          --v5;
        }
        while ( v5 );
      }
      v6 = *((_DWORD *)this + 984);
      if ( *((_DWORD *)this + 983) > v6 )
        _invalid_parameter_noinfo();
      v16 = (void *)*((_DWORD *)this + 983);
      if ( (unsigned int)v16 > *((_DWORD *)this + 984) )
        _invalid_parameter_noinfo();
      v7 = Source;
      if ( v20 > Source )
        _invalid_parameter_noinfo();
      sub_10006ACD((int)&v19, v7, (int)this + 3928, v16, (int)this + 3928, v6, a2);
      v8 = *((_DWORD *)this + 988);
      if ( *((_DWORD *)this + 987) > v8 )
        _invalid_parameter_noinfo();
      v9 = (void *)*((_DWORD *)this + 987);
      if ( (unsigned int)v9 > *((_DWORD *)this + 988) )
        _invalid_parameter_noinfo();
      v17 = Source;
      if ( v20 > Source )
        _invalid_parameter_noinfo();
      sub_10006ACD((int)&v19, v17, (int)this + 3944, v9, (int)this + 3944, v8, a2);
      v10 = sub_1000194C(0);
      (*(void (__thiscall **)(struct GameClient::Function *, int, int *, int))(*(_DWORD *)Function + 72))(
        Function,
        v10,
        &v19,
        a2);
      sub_1000C252((int)&v19);
      v11 = operator new(4u);
      if ( v11 )
        *v11 = &CProduceMsgHandler::`vftable';
      std::wstring::wstring(v23, &unk_10323014);
      LOBYTE(v24) = 1;
      v12 = CDlgMgr::Instance();
      CDlgMgr::PopMessage(v12);
      LOBYTE(v24) = 0;
      std::wstring::~wstring(v23);
      v13 = v20;
      v14 = v20 == 0;
      *((_BYTE *)this + 4016) = 1;
      if ( !v14 )
        operator delete(v13);
    }
  }
}
