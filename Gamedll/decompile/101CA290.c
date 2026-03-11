/*
 * func-name: ??0Func_Store@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101ca290
 * callers: 0x10003404
 * callees: 0x10012e09, 0x1001a82a
 */

GameClient::Func_Store *__thiscall GameClient::Func_Store::Func_Store(
        GameClient::Func_Store *this,
        const struct GameClient::Func_Store *a2)
{
  GameClient::Function::Function(this, a2);
  *(_DWORD *)this = &GameClient::Func_Store::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Store::`vftable'{for `GameClient::DataObject'};
  sub_1001A82A((int)a2 + 44);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  return this;
}
