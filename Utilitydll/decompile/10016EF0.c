/*
 * func-name: ?start@Record_Logger@Utility@Outpop@@QAEHW4SplitType@123@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z
 * func-address: 0x10016ef0
 * callers: none
 * callees: 0x100018c0, 0x1000d3c0
 */

int __thiscall Outpop::Utility::Record_Logger::start(Outpop::Utility::Task *this, int a2, int a3, int a4)
{
  int v5; // eax
  int v7; // [esp+8h] [ebp-8h] BYREF
  int v8; // [esp+Ch] [ebp-4h]

  *((_DWORD *)this + 51) = a2;
  if ( a2 == 1 )
  {
    *((_DWORD *)this + 42) = a4;
LABEL_5:
    std::string::operator=((char *)this + 176, a3);
    return Outpop::Utility::Task::activate(this, 1, 0, 0, 0, 0);
  }
  if ( !a2 )
  {
    v7 = 60 * a4;
    v8 = 0;
    Outpop::Utility::Time_Value::normalize((Outpop::Utility::Time_Value *)&v7);
    v5 = v8;
    *((_DWORD *)this + 52) = v7;
    *((_DWORD *)this + 53) = v5;
    goto LABEL_5;
  }
  return -1;
}
