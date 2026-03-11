/*
 * func-name: ??0Func_Receive@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10066650
 * callers: 0x100109a6
 * callees: 0x1000cf3b, 0x10012e09, 0x1001a63b
 */

GameClient::Func_Receive *__thiscall GameClient::Func_Receive::Func_Receive(
        GameClient::Func_Receive *this,
        const struct GameClient::Func_Receive *a2)
{
  GameClient::Func_Receive *result; // eax

  GameClient::Function::Function(this, a2);
  *(_DWORD *)this = &GameClient::Func_Receive::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Receive::`vftable'{for `GameClient::DataObject'};
  sub_1000CF3B((int)a2 + 44);
  sub_1001A63B((int)a2 + 84);
  *((_DWORD *)this + 31) = *((_DWORD *)a2 + 31);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((float *)this + 34) = *((float *)a2 + 34);
  result = this;
  *((float *)this + 35) = *((float *)a2 + 35);
  return result;
}
