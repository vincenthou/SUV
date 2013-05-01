<?php /* @var $this Controller */ ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="language" content="en" />
    <link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/lib/reset.css"/>
    <link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/lib/bootstrap.min.css" />
    <link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/lib/bootstrap-responsive.min.css" />
    <link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/base.css" />
    <link rel="stylesheet/less" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/less/base.less">
    <link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/plugin/footable-0.1.css">
    <script type="text/javascript" src="<?php echo Yii::app()->request->baseUrl; ?>/js/lib/jquery-1.7.1.js"></script> 
    <script type="text/javascript" src="<?php echo Yii::app()->request->baseUrl; ?>/js/lib/less.js"></script> 
    <script type="text/javascript" src="<?php echo Yii::app()->request->baseUrl; ?>/js/common/path.js"></script> 
    <script type="text/javascript" src="<?php echo Yii::app()->request->baseUrl; ?>/js/common/component.js"></script> 
    <!--ueditor-->
    <script type="text/javascript" src="<?php echo Yii::app()->request->baseUrl; ?>/ueditor/editor_config.js"></script> 
    <script type="text/javascript" src="<?php echo Yii::app()->request->baseUrl; ?>/ueditor/editor_all.js"></script> 
    <!--grid-->
    <script type="text/javascript" src="<?php echo Yii::app()->request->baseUrl; ?>/js/plugin/footable-0.1.js"></script>     
    <title><?php echo CHtml::encode($this->pageTitle); ?></title>
</head>

<body>

<div id="page">

    <header class="main-gradient row-fluid">
        <span id="logo" class="logo span3"><?php echo CHtml::encode(Yii::app()->name); ?></span>
        <span class="welcome span2 offset9">Hi, Vincent</span>
    </header><!-- header -->    

    <?php echo $content; ?>

    <div class="clear"></div>

    <footer class="main-gradient">
        <p>Copyright &copy; <?php echo date('Y'); ?> by SUV.</p>
        <p>All Rights Reserved.</p>
    </footer><!-- footer -->

</div><!-- page -->

</body>
</html>
