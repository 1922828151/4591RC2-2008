/*
 * func-name: ??0Func_Power@GameClient@@QAE@K@Z_0
 * func-address: 0x101bf1a0
 * callers: 0x1000f5a1
 * callees: 0x10016a7c
 */

GameClient::Func_Power *__thiscall GameClient::Func_Power::Func_Power(GameClient::Func_Power *this, unsigned int a2)
{
  GameClient::Func_Power *result; // eax

  GameClient::Function::Function(this, a2);
  *((double *)this + 8) = 10000.0;
  *((double *)this + 9) = 10000.0;
  *((_BYTE *)this + 96) = 1;
  *((_BYTE *)this + 128) = 1;
  *((double *)this + 10) = 0.0;
  *((_BYTE *)this + 144) = 1;
  *((double *)this + 11) = 0.0;
  *((_BYTE *)this + 188) = 1;
  *(_DWORD *)this = &GameClient::Func_Power::`vftable'{for `GameClient::Interactable'};
  *((double *)this + 13) = 100.0;
  *((_DWORD *)this + 4) = &GameClient::Func_Power::`vftable'{for `GameClient::DataObject'};
  *((double *)this + 14) = 100.0;
  *((_DWORD *)this + 30) = 4;
  *((double *)this + 17) = 100.0;
  *((_DWORD *)this + 31) = 7;
  result = this;
  *((double *)this + 19) = 10.0;
  *((double *)this + 20) = 100.0;
  *((float *)this + 42) = 0.0;
  *((float *)this + 43) = 1.0;
  *((float *)this + 44) = 10.0;
  *((float *)this + 45) = 120.0;
  *((float *)this + 46) = 100.0;
  *((float *)this + 48) = 0.0;
  *((float *)this + 49) = 0.0;
  *((float *)this + 50) = 0.0;
  *((_DWORD *)this + 10) = 5;
  *((float *)this + 53) = 0.0;
  return result;
}
