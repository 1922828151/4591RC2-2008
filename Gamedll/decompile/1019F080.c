/*
 * func-name: sub_1019F080
 * func-address: 0x1019f080
 * callers: 0x1000e02a
 * callees: 0x102c9d86
 */

int *__thiscall sub_1019F080(int *this, const char *a2)
{
  DWORD LastError; // eax
  int v4; // edi
  unsigned int size; // eax
  int v6; // eax
  DWORD v8; // eax
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-78h] BYREF
  _BYTE v10[8]; // [esp+Ch] [ebp-6Ch] BYREF
  _BYTE v11[12]; // [esp+14h] [ebp-64h] BYREF
  _BYTE v12[20]; // [esp+20h] [ebp-58h] BYREF
  _BYTE v13[28]; // [esp+34h] [ebp-44h] BYREF
  _BYTE v14[28]; // [esp+50h] [ebp-28h] BYREF
  int v15; // [esp+74h] [ebp-4h]

  if ( !*((_BYTE *)this + 20) )
  {
    std::string::string(v13, "stream operator << T space not enugh");
    v15 = 0;
    LastError = GetLastError();
    Outpop::Utility::StreamException::StreamException(v10, v13, LastError, 0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  if ( Outpop::Utility::Stream_Base::get_space((Outpop::Utility::Stream_Base *)this) < 4u )
  {
    v4 = *this;
    size = Outpop::Utility::Stream_Base::get_size((Outpop::Utility::Stream_Base *)this);
    (*(void (__thiscall **)(int *, unsigned int))(v4 + 16))(this, size + 132);
  }
  v6 = Outpop::Utility::OS_Buffer::write((Outpop::Utility::OS_Buffer *)this[2], a2, this[3], 4);
  if ( v6 == -1 )
  {
    std::string::string(v14, "stream opera << const T write  faild");
    v15 = 1;
    v8 = GetLastError();
    Outpop::Utility::StreamException::StreamException(v12, v14, v8, 0);
    CxxThrowException(v11, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  this[3] += v6;
  return this;
}
