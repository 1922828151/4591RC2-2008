/*
 * func-name: sub_102AF050
 * func-address: 0x102af050
 * callers: 0x1000e40d
 * callees: 0x102c9d98
 */

Outpop::Utility::Task *sub_102AF050()
{
  Outpop::Utility::Task *result; // eax
  Outpop::Utility::Task *v1; // eax
  Outpop::Utility::Task *v2; // esi

  result = *(Outpop::Utility::Task **)&byte_103B6678[256];
  if ( !*(_DWORD *)&byte_103B6678[256] )
  {
    v1 = (Outpop::Utility::Task *)operator new(0x54u);
    v2 = v1;
    if ( v1 )
    {
      Outpop::Utility::Task::Task(v1);
      *(_DWORD *)v2 = &GameClient::Chat_Task::`vftable';
      *((_DWORD *)v2 + 20) = 0;
    }
    else
    {
      v2 = 0;
    }
    result = v2;
    *(_DWORD *)&byte_103B6678[256] = v2;
  }
  return result;
}
