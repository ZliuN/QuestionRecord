Zilove form Jxust China

本地第一次安装git,先配置基本的信息：
git config--global user.name '用户名'
git config --global user.email '用户邮箱'

本地仓库与远程仓库关联: 
git remote add origin '项目url' 

更新项目,确保没有和远程仓库的代码有冲突: 
git pull --rebase origin master 

把项目复制到，本地git目录下准备上传。 

操作提交master步骤: 
git add . 
git status 
git commit -m '备注信息' 
git push origin master -f     第一次使用,强制提交master分支.（以后提交最好不要使用！）