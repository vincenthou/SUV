<?php /* @var $this Controller */ ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<meta name="language" content="en" />	
	<link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/lib/reset.css"/>
	<!-- css 
	<link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/lib/bootstrap.css" />
	<link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/lib/flat-ui.css" />
	js --> 
	<link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/base.css" />	 
	<script type="text/javascript" src="<?php echo Yii::app()->request->baseUrl; ?>/js/lib/jquery-1.7.1.js"></script> 
	<title><?php echo CHtml::encode($this->pageTitle); ?></title>
</head>

<body>

<div class="container" id="page">

	<header class="main-gradient">
		<div id="logo" class="logo"><?php echo CHtml::encode(Yii::app()->name); ?></div>
		<nav id="mainmenu" class="offset40">
			<ul class="nav">
			  <li class="active">
			    <a href="#">首页</a>
			  </li>
			  <li><a href="#">文档</a></li>
			  <li><a href="#">问题</a></li>
			  <li><a href="#">关于</a></li>
			</ul>
		</nav>
		<a id="login-btn" href="<?php echo Yii::app()->request->baseUrl; ?>/index.php/site/login">登录</a>
	</header><!-- header -->	
	<?php if(isset($this->breadcrumbs)):?>
		<?php $this->widget('zii.widgets.CBreadcrumbs', array(			'links'=>$this->breadcrumbs,

		)); ?><!-- breadcrumbs -->
	<?php endif?>

	<?php echo $content; ?>

	<div class="clear"></div>

	<footer class="main-gradient">
		<p>Copyright &copy; <?php echo date('Y'); ?> by SUV.</p>
		<p>All Rights Reserved.</p>
		<p><?php echo Yii::powered(); ?></p>		
	</footer><!-- footer -->

</div><!-- page -->

</body>
</html>
