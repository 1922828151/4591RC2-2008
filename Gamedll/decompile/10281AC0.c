/*
 * func-name: ?Tick@CRobotRoofUI@@UAEXM@Z_0
 * func-address: 0x10281ac0
 * callers: 0x1001a50f
 * callees: 0x1000194c, 0x10006947, 0x1000a506
 */

void __thiscall CRobotRoofUI::Tick(CRobotRoofUI *this, float a2)
{
  int v3; // edi
  GameClient::FuncManager *v4; // eax
  struct GameClient::Function *Function; // eax
  unsigned int v6; // [esp+10h] [ebp-Ch]

  v3 = sub_1000194C(0);
  if ( *((_DWORD *)this + 1006) != -1 )
  {
    if ( v3 )
    {
      if ( *((_DWORD *)this + 1008) )
      {
        v6 = *((_DWORD *)this + 1006);
        v4 = GameClient::FuncManager::Instance();
        Function = GameClient::FuncManager::GetFunction(v4, v6);
        if ( Function )
          (*(void (__thiscall **)(struct GameClient::Function *, int, _DWORD, int))(*(_DWORD *)Function + 64))(
            Function,
            v3,
            *((_DWORD *)this + 1008),
            -1);
      }
    }
  }
  if ( *((_DWORD *)this + 979) == -1 || *((_DWORD *)this + 980) == -1 || *((_DWORD *)this + 981) == -1 )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 975) + 128))(*((_DWORD *)this + 975), 0);
  else
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 975) + 128))(*((_DWORD *)this + 975), 1);
  CTYDialog::Tick(this, a2);
}
