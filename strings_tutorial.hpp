// if you have other methods of retrieving offsets using strings please feel free to message me on discord: @credential_ or @2qp0

namespace Strings {
    const uintptr_t FlogDataBank = "WindowsRealtimeProtocolEnabled" // string use xref
    const uintptr_t Print = "Current identity is %d // string use xref"
    const uintptr_t Print_alternative = "print identity" // string use xref or make into func
    const uintptr_t KTable = "Trying to call method on object of type: `%s` with incorrect arguments." // string use xref
    const uintptr_t LockViolationInstanceCrash =  "LockViolationInstanceCrash" // string use xref
    const uintptr_t luaH_dummynode = "Attempt to migrate WeakObjectRef across VM boundary" // string use xref (check relative location)
    const uintptr_t luaO_nilobject = "Attempt to migrate WeakObjectRef across VM boundary" // string use xref (check relative location)
    const uintptr_t luaT_Eventnames = "__call" // string use xref
    const uintptr_t luaT_typenames = "userdata" // string use xref
    const uintptr_t RawScheduler = "HumanoidParallelManagerTaskQueue" // string use xref
    const uintptr_t TaskScehulderTargetFps = "TaskSchedulerTargetFps" // string use xref
    const uintptr_t OpcodeLookupTable = "; R%d: %s%s from %d to %d" // string use xref
    const uintptr_t FireTouchInterest = "new overlap in different world" // string use xref
    const uintptr_t GetGlobalState = "Script Start" // string use xref
    const uintptr_t GetFFlag = "_DataCenterFilter" // string use xref
    const uintptr_t HashTableLookup = "Unable to query property {}. It is not scriptable" // string use xref
    const uintptr_t ScriptContextResume = "Script execution is not allowed in this context | ScriptResumeBlocked" // string use xref
    const uintptr_t luaL_argerror = "bad argument #%d to '%s' (%s expected, got %s)"  // string use xref
    const uintptr_t lua_yield = "Attempt to yield across metamethod/C-call boundary"  // string use xref
    const uintptr_t lua_newstate = "not enough memory"  // string use xref
    const uintptr_t lua_concat = "attempt to concatenate %s with %s"  // string use xref
    const uintptr_t lua_pcall = "error in error handling"  // string use xref
}
