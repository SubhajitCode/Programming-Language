import sys
import chilkat

ssh = chilkat.CkSsh()

#  If a license is purchased, replace "Anything for 30-day trial" with the purchased unlock code.
success = ssh.UnlockComponent("Anything for 30-day trial")
if (success != True):
    print(ssh.lastErrorText())
    print("unlock failed.")
    sys.exit()

#  If debugging, you can examine the LastErrorText even when a method is successful.
#  This allows one to see what transpired within the method call, especially
#  if the VerboseLogging property is turned on.
#  In this case, a programmer can examine the LastErrorText to see if success
#  was with a purchased (and recognized) unlock code, or if it was successful in trial mode.

print(ssh.lastErrorText())
print("unlock successful.")