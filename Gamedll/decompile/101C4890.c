/*
 * func-name: ??0Func_Sheild@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101c4890
 * callers: 0x10013d63
 * callees: 0x10012e09
 */

GameClient::Func_Sheild *__thiscall GameClient::Func_Sheild::Func_Sheild(
        GameClient::Func_Sheild *this,
        const struct GameClient::Func_Sheild *a2)
{
  GameClient::Function::Function(this, a2);
  *(_DWORD *)this = &GameClient::Func_Sheild::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Sheild::`vftable'{for `GameClient::DataObject'};
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((float *)this + 15) = *((float *)a2 + 15);
  *((float *)this + 16) = *((float *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  return this;
}
