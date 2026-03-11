/*
 * func-name: ??0Func_Power@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10172300
 * callers: 0x100186ce
 * callees: 0x10012e09
 */

GameClient::Func_Power *__thiscall GameClient::Func_Power::Func_Power(
        GameClient::Func_Power *this,
        const struct GameClient::Func_Power *a2)
{
  GameClient::Func_Power *result; // eax

  GameClient::Function::Function(this, a2);
  *(_DWORD *)this = &GameClient::Func_Power::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Power::`vftable'{for `GameClient::DataObject'};
  *((double *)this + 6) = *((double *)a2 + 6);
  *((double *)this + 7) = *((double *)a2 + 7);
  *((double *)this + 8) = *((double *)a2 + 8);
  *((double *)this + 9) = *((double *)a2 + 9);
  *((double *)this + 10) = *((double *)a2 + 10);
  *((double *)this + 11) = *((double *)a2 + 11);
  *((_BYTE *)this + 96) = *((_BYTE *)a2 + 96);
  *((double *)this + 13) = *((double *)a2 + 13);
  *((double *)this + 14) = *((double *)a2 + 14);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_DWORD *)this + 31) = *((_DWORD *)a2 + 31);
  *((_BYTE *)this + 128) = *((_BYTE *)a2 + 128);
  *((double *)this + 17) = *((double *)a2 + 17);
  *((_BYTE *)this + 144) = *((_BYTE *)a2 + 144);
  *((double *)this + 19) = *((double *)a2 + 19);
  *((double *)this + 20) = *((double *)a2 + 20);
  *((float *)this + 42) = *((float *)a2 + 42);
  *((float *)this + 43) = *((float *)a2 + 43);
  *((float *)this + 44) = *((float *)a2 + 44);
  *((float *)this + 45) = *((float *)a2 + 45);
  *((float *)this + 46) = *((float *)a2 + 46);
  *((_BYTE *)this + 188) = *((_BYTE *)a2 + 188);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((float *)this + 51) = *((float *)a2 + 51);
  result = this;
  *((float *)this + 52) = *((float *)a2 + 52);
  *((float *)this + 53) = *((float *)a2 + 53);
  return result;
}
